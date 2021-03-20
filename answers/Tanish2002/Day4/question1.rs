#[allow(unused_assignments)]
fn prime_factors(mut input: i32) {
    while input % 2 == 0 {
        print!("2 x ");
        input = input / 2;
    }
    for mut i in 3..(input as f64).sqrt() as i32 + 1 {
        while input % i == 0 {
            print!("{} x ", i);
            input = input / i;
        }
        i = i + 2;
    }
    if input > 2 {
        print!("{} ", input);
    }
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
    print!("The Prime Factors are: ");
    prime_factors(input);
}
