fn main() {
    let mut k: u32 = 1;
    for i in 1..6 {
        for _ in 1..i {
            print!("{}", k);
            k = k + 1;
        }
        println!("");
    }
}
