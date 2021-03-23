fn fib(n: u64) -> u64 {
    (0..n).fold((0, 1), |(a, b), _| (b, a + b)).1
}
fn main() {
    println!("Fibonacci Series for 50 -:");
    println!(
        "{}",
        (1..50)
            .map(|x| fib(x))
            .fold("1".to_string(), |a, c| format!("{}, {}", a, c))
    );
}
