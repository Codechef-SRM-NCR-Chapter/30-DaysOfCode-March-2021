fn is_prime(n: i32) -> bool {
    for i in 2..n {
        let p = n % i;
        if p == 0 {
            return false;
        }
    }
    return true;
}
fn reverse_int(mut input: i32) -> i32 {
    let mut reversed_number = 0;
    let mut remainder: i32;
    while input != 0 {
        remainder = input % 10;
        reversed_number = reversed_number * 10 + remainder;
        input /= 10;
    }
    reversed_number
}
fn main() {
    use std::io;
    println!("Enter the value: ");
    let mut input_string = String::new();
    io::stdin()
        .read_line(&mut input_string)
        .expect("Couldn't read input");
    let input = input_string
        .trim_end_matches('\n')
        .to_string()
        .trim()
        .parse::<i32>()
        .expect("Your input was not an integer");
    let input_check: bool = is_prime(input);
    let inputrev_check: bool = is_prime(reverse_int(input));
    if input_check && inputrev_check {
        println!("{} is a Emirp number", input);
    } else {
        println!("{} is not a Emirp number", input);
    }
}
