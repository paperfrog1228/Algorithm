import java.io.*
fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val (n,t,c,p)=readLine().split(' ').map {it.toInt()}
    print((n-1)/t*c*p)
}