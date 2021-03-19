fn main() {
    use std::io;
    println!("Enter the value: ");
    let mut input_string = String::new();
    io::stdin()
        .read_line(&mut input_string)
        .expect("Couldn't read input");
    input_string = input_string.trim_end_matches('\n').to_string();
    let input: u32 = input_string
        .trim()
        .parse::<u32>()
        .expect("Your input was not an integer");
    let mut value = 0;
    let mut power = 0;
    input_string
        .chars()
        .map(|c| c.to_digit(10).unwrap())
        .enumerate()
        .map(|(i, c)| {
            power = i + 1;
            value = value + u32::pow(c, power as u32)
        })
        .for_each(drop);
    if input == value {
        println!("{} is Disarium", input)
    } else {
        println!("{} is not Disarium", input)
    }
}
