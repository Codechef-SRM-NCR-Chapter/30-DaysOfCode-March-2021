use std::io;
fn main() {
    println!("Enter the value: ");
    let mut input_string = String::new();
    io::stdin()
        .read_line(&mut input_string)
        .expect("Couldn't read input");
    let input: i32 = input_string
        .trim()
        .parse::<i32>()
        .expect("Your input was not an integer");
    for i in 1..input + 1 {
        for j in 1..i + 1 {
            print!("{}", j);
        }
        println!("")
    }
}
