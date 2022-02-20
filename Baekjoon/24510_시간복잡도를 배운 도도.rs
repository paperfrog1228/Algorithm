use std::io;

fn main() {
    let mut n = String::new();
    io::stdin().read_line(&mut n);
    let mut ans = 0;
    for i in 0..n.trim().parse().unwrap() {
        let mut s = String::new();
        io::stdin().read_line(&mut s);
        let c = s.matches("for").count() + s.matches("while").count();
        if (ans < c) {
            ans = c;
        }
    }
    println!("{}", ans);
}
