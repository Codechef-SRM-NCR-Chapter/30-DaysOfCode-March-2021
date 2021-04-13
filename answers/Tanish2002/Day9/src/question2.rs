use text_io::read;
fn max_sub_array(nums: Vec<i32>) -> i32 {
    let mut prev = 0;
    let mut max = std::i32::MIN;
    let n = nums.len();
    for i in 0..n {
        prev = nums[i].max(prev + nums[i]);
        max = max.max(prev);
    }
    max
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
    println!("{}", max_sub_array(nums));
}
