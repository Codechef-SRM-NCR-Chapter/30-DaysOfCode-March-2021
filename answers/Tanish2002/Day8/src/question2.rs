use text_io::read;
fn array_pair_sum(mut nums: Vec<i32>) -> i32 {
    nums.sort_unstable();
    nums.chunks(2).fold(0, |sum, pair| sum + pair[0])
}
fn main() {
    let nums: Vec<i32>;
    println!("Enter Values for array like: `1 2 3 4 5`");
    let value: String = read!("{}\n");
    nums = value
        .split_whitespace()
        .map(|x| x.parse::<i32>())
        .collect::<Result<Vec<i32>, _>>()
        .unwrap();
    println!("{}", array_pair_sum(nums));
}
