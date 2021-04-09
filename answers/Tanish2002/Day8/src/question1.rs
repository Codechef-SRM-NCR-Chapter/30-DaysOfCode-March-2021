use itertools::Itertools;
use text_io::read;
fn main() {
    let mut nums: Vec<i32>;
    println!("Enter Values for array like: `1 2 3 4 5`");
    let value: String = read!("{}\n");
    nums = value
        .split_whitespace()
        .map(|x| x.parse::<i32>())
        .collect::<Result<Vec<i32>, _>>()
        .unwrap();

    nums.sort();
    let mut dup: Vec<i32> = Vec::new();
    for i in 0..nums.len() - 1 {
        if nums[i] == nums[i + 1] {
            dup.push(nums[i])
        }
    }
    nums = nums.into_iter().dedup().collect::<Vec<i32>>();
    dup.into_iter().for_each(|i| nums.retain(|&x| x != i));
    println!("{:?}", nums.iter().sum::<i32>())
}
