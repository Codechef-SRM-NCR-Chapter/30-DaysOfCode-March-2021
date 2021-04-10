use text_io::read;
fn camel_case_breaker(string: String) -> String {
    string
        .to_string()
        .chars()
        .into_iter()
        .map(|c| {
            if c.is_uppercase() {
                format!("\n{}", c.to_lowercase())
            } else {
                c.to_string()
            }
        })
        .collect::<String>()
}
fn main() {
    let string: String = read!("{}\n");
    println!("{}", camel_case_breaker(string));
}
