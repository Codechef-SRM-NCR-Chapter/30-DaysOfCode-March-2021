use text_io::read;
fn count_good_triplets(a: Vec<i32>, q: i32, w: i32, e: i32) -> i32 {
    let mut res = 0;
    let n = a.len();
    for i in 0..n {
        for j in i + 1..n {
            for k in j + 1..n {
                if (a[i] - a[j]).abs() <= q && (a[j] - a[k]).abs() <= w && (a[i] - a[k]).abs() <= e
                {
                    res += 1;
                }
            }
        }
    }
    res
}
fn main() {
    println!("Enter the value of a");
    let a: i32 = read!();
    println!("Enter the value of b");
    let b: i32 = read!();
    println!("Enter the value of c");
    let c: i32 = read!();
    let mut arr: Vec<i32> = Vec::new();
    let mut i = 0;
    loop {
        println!("Enter the value for arr[{}], Type quit to stop: ", i);
        let arr_string: String = read!();
        if arr_string == "quit" {
            break;
        } else {
            let input: i32 = arr_string
                .trim()
                .parse::<i32>()
                .expect("input is not an integer");
            arr.push(input);
        }
        i += 1;
    }
    println!(
        "Possible good triplets are: {}",
        count_good_triplets(arr, a, b, c)
    );
}
