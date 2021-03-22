use std::io;
fn sum_odd_length_subarrays(arr: Vec<i32>) -> i32 {
    (1..=arr.len())
        .step_by(2)
        .map(|n| arr.windows(n).map(|s| s.iter().sum::<i32>()).sum::<i32>())
        .sum()
}
fn main() {
    let mut arr: Vec<i32> = Vec::new();
    let mut i = 0;
    loop {
        let mut input_string = String::new();
        println!("Enter the value for arr[{}], Type quit to stop: ", i);
        io::stdin().read_line(&mut input_string).unwrap();
        input_string = input_string.trim_end_matches('\n').to_string();
        if input_string == "quit" {
            break;
        } else {
            let input: i32 = input_string
                .trim()
                .parse::<i32>()
                .expect("input is not an integer");
            arr.push(input);
        }
        i += 1;
    }
    println!(
        "The sum of odd lenght of subarrays is: {:#?}",
        sum_odd_length_subarrays(arr)
    );
}
