use std::io;

fn main() {
    let mut s = String::new();
    io::stdin().read_line(&mut s);
    let n: u32 = s.trim().parse().expect("");
    for i in (0..n + 1).rev() {
        let ss = i.to_string();
        let mut end = true;
        for j in 0..ss.len() {
            if (ss.as_bytes()[j] as char != '4' && ss.as_bytes()[j] as char != '7') {
                end = false;
                break;
            }
        }
        if (end) {
            println!("{}", i);
            break;
        }
    }
}