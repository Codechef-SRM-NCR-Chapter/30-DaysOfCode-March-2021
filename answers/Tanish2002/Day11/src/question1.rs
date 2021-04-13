use text_io::read;
fn is_palindrom(string: String) -> bool {
    const CHARS: usize = 256;
    let mut count: [i32; CHARS] = [0; CHARS];
    string.chars().for_each(|i| {
        count[i as usize] += 1;
    });
    let mut odd: i32 = 0;
    for i in 0..CHARS {
        if (count[i] & 1) != 0 {
            odd += 1;
        }
        if odd > 1 {
            return false;
        }
    }
    return true;
}
fn main() {
    let string: String = read!("{}\n");
    println!("{}", is_palindrom(string));
}
