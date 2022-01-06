import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    var (y1, m1, d1) = readLine().split(' ').map { it.toInt() }
    var (y2, m2, d2) = readLine().split(' ').map { it.toInt() }
    var a=y2-y1
    var b=a+1
    var c=a
    a-=1
    if(m1<m2)
        a+=1
    else if(m1==m2&&d1<=d2) a+=1
    if(a<0) a=0
    print("$a\n$b\n$c")
}