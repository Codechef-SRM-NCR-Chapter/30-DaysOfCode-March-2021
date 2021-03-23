fn main() {
    let mut iteration = 0;
    let mut level = 1;
    let mut symbol: char;
    for i in 1..11 {
        if i == 2 || i == 3 || i == 5 || i == 7 {
            symbol = '#';
        } else {
            symbol = '*';
        }
        print!("{} ", symbol);
        iteration = iteration + 1;
        if iteration == level {
            iteration = 0;
            level = level + 1;
            println!("");
        }
    }
}
