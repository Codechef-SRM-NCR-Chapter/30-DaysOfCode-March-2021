use std::io;
fn kids_with_candies(candies: Vec<i32>, extra_candies: i32) -> Vec<bool> {
    let max_candies = candies.iter().max().unwrap();
    candies
        .iter()
        .map(|candies_count| candies_count + extra_candies >= *max_candies)
        .collect()
}
fn main() {
    let mut extra_string = String::new();
    println!("Enter the ammount of Extra candies: ");
    io::stdin().read_line(&mut extra_string).unwrap();
    extra_string = extra_string.trim_end_matches('\n').to_string();
    let extra: i32 = extra_string
        .trim()
        .parse::<i32>()
        .expect("input is not an integer");
    let mut arr: Vec<i32> = Vec::new();
    let mut i = 1;
    loop {
        let mut input_string = String::new();
        println!(
            "Enter the ammount of candies for Kid {}, Type quit to stop: ",
            i
        );
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
    println!("{:#?} ", kids_with_candies(arr, extra));
}
