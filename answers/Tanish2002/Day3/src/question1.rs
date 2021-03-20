fn main() {
    use std::io;
    println!("Enter the value: ");
    let mut input_string = String::new();
    io::stdin()
        .read_line(&mut input_string)
        .expect("Couldn't read input");
    let input: i32 = input_string
        .trim()
        .parse::<i32>()
        .expect("Your input was not an integer");
    let mut output: i32 = 0;
    let mut s: i32 = 0;
    let mut series = String::new();
    for i in 1..input + 1 {
        s = s * 10 + i;
        series = format!("{} {} +", series, s);
        output = output + s;
    }
    println!("The Series is:{}", series.trim_end_matches('+'));
    println!("The sum is: {}", output);
}
