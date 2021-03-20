fn main() {
	for i in 0..5 {
		for j in 0..5 {
			if j <= (4 - i) {
				print!("  ");
			}
			else {
				print!(" *");
			}
		}
		println!("")
	}
}
