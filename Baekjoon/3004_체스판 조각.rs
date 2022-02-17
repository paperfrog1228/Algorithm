use std::io;
fn main() {
    let mut s=String::new();
    io::stdin().read_line(&mut s);
    let n:u32=s.trim().parse().expect("");
    let r=n/2+1;
    println!("{}",r*(n-r+2));
}