use std::collections::HashMap;
use text_io::read;

fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let mut hm: HashMap<i32, i32> = HashMap::new();
    for (i, &num) in nums.iter().enumerate() {
        match hm.get(&(target - num)) {
            Some(&j) => return vec![j, i as i32],
            None => {
                hm.insert(num, i as i32);
            }
        }
    }
    vec![]
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
    println!("Enter Value for target");
    let target: i32 = read!("{}");
    println!("{:?}", two_sum(nums, target));
}
