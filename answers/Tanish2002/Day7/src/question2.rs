use text_io::read;
fn create_target_array(nums: Vec<i32>, index: Vec<i32>) -> Vec<i32> {
    let n = nums.len();
    let mut ret = Vec::with_capacity(n);
    for i in 0..n {
        ret.insert(index[i] as usize, nums[i]);
    }
    ret
}
fn main() {
    let mut arr: Vec<i32> = Vec::new();
    let mut index: Vec<i32> = Vec::new();
    let mut i = 0;
    loop {
        println!("Enter the value for index[{}], Type -1 to quit", i);
        let index_value: i32 = read!();
        if index_value == -1 {
            break;
        } else {
            index.push(index_value);
        }
        i += 1;
    }
    let mut j = 0;
    loop {
        println!("Enter the value for arr[{}], Type -1 to quit", j);
        let arr_value: i32 = read!();
        if arr_value == -1 {
            break;
        } else {
            arr.push(arr_value);
        }
        j += 1;
    }
    println!(
        "The resulting array is: {:?}",
        create_target_array(arr, index)
    );
}
