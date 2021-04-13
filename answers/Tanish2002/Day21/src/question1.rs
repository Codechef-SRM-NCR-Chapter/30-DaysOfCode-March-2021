use substring::Substring;
use text_io::{read, scan};
fn is_palindrome(string: &str) -> bool {
    let half_len: usize = string.len() / 2;
    string
        .to_string()
        .chars()
        .take(half_len)
        .eq(string.chars().rev().take(half_len))
}
fn replace(string: &str, index: usize, character: &str) -> String {
    let mut new_string: String = String::from(string);
    new_string.replace_range(index..index + 1, character);
    new_string
}
fn main() {
    let length: i32;
    let ops: i32;
    println!("Enter the length and number of operations like `7 5`: ");
    scan!("{} {}", length, ops);
    println!("Enter a string containing {} letters", length);
    let string: String = read!("{}\n");
    for _ in 0..ops {
        let a: i32;
        let b: usize;
        let c: String;
        println!("Describe the operations like `2 3 5 or 1 3 X`: ");
        scan!("{} {} {}", a, b, c);
        if a == 1 {
            println!("{}", replace(string.as_ref(), b, c.as_ref()));
        } else if a == 2 {
            let substring: &str = string.substring(b, c.parse::<usize>().unwrap());
            println!("{}", is_palindrome(substring));
        }
    }
}
