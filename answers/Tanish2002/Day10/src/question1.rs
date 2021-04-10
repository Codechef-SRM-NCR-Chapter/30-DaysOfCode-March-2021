use text_io::read;

pub fn is_pangram(string: String) -> bool {
    //Copy chars into a vector, convert to lowercase, sort, and remove duplicates.
    let mut chars: Vec<char> = string
        .to_string()
        .chars()
        .flat_map(|chr| chr.to_lowercase())
        .filter(|&chr| chr >= 'a' && chr <= 'z')
        .collect();

    chars.sort();
    chars.dedup();

    chars.len() == 26
}

fn main() {
    println!("Enter the String:");
    let string: String = read!("{}\n");
    println!("{:?}", is_pangram(string.to_string()));
}
