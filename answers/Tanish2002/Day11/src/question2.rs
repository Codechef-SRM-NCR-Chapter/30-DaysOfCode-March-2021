use text_io::read;
fn main() {
    println!("Enter String:");
    let string: String = read!("{}");
    println!("Enter number of substrings:");
    let pattern_no: i32 = read!();
    println!("Enter substring(s):");
    for _ in 0..pattern_no {
        let x: String = read!();
        println!(
            "The substring has occurred {} times",
            string.matches(&x).count()
        );
    }
}
