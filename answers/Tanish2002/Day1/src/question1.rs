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
    let mut x: i32;
    let mut a: i32 = 2;
    print!("The series is as follows: ");
    for i in 0..input {
        x = i32::pow(i + 1, 3) + a;
        a = a + 2;
        print!("{}, ", x);
    }
}
