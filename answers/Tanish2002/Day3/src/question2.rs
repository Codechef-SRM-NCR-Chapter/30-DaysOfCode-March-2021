fn main() {
    use std::io;
    println!("Enter the value: ");
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Couldn't read input");
    let unique = input
        .chars()
        .enumerate()
        .any(|(i, c)| input[(i + 1)..].contains(c));
    if unique {
        println!("NON-UNIQUE NUMBER");
    } else {
        println!("UNIQUE NUMBER");
    }
}
