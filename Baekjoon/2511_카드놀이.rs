fn main() {
    let mut s1=String::new();
    let mut s2=String::new();
    std::io::stdin().read_line(&mut s1);
    std::io::stdin().read_line(&mut s2);
    let vec_str_a: Vec<&str> = s1.split_whitespace().collect();
    let vec_str_b: Vec<&str> = s2.split_whitespace().collect();
    let mut a=0;
    let mut b=0;
    let mut last_winner="D";
    for i in 0..10{
        let number_a = match vec_str_a[i].parse::<i32>() {
            Ok(i) => i,
            Err(_e) => {
                -1
            }
        };
        let number_b = match vec_str_b[i].parse::<i32>() {
            Ok(i) => i,
            Err(_e) => {
                -1
            }
        };
        if(number_a>number_b) {
            a+=3;
            last_winner="A";
        }
        else if(number_a<number_b){
            b+=3;
            last_winner="B";
        }
        else{
            a+=1;
            b+=1;
        }
    }
    println!("{} {}",a,b);
    if(a==b){
        println!("{}",last_winner);
    }
    else {
        if(a>b) {
            println!("A");
        }
        else {
            println!("B");
        }
    }
}