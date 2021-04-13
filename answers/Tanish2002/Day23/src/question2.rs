use text_io::read;
fn count(string: &str) -> i32 {
    let mut count: i32 = 0;
    let length: usize = string.chars().count();
    for i in 0..length {
        if string.chars().nth(i).unwrap() == '1' {
            for j in i..length {
                if string.chars().nth(j).unwrap() == '1' {
                    count += 1;
                }
            }
        }
    }
    count
}
fn main() {
    println!("Enter the no of test cases:");
    let cases: i32 = read!();
    for _ in 0..cases {
        println!("Enter the string(s):");
        let string: String = read!("{}");
        println!("Substrings are: {}", count(string.as_ref()))
    }
}
