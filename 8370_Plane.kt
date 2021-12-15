import java.io.*
fun main(args: Array<String>) = with (BufferedReader(InputStreamReader(System.`in`))) {
    var a= readLine().split(' ').map{it.toInt()}
    print(a[0]*a[1]+a[2]*a[3])

    /* 아래와 같이 가능함
    val (n1, k1, n2, k2) = readLine().split(" ").map { it.toInt() }
    print(n1*k1 + n2*k2)
    */
}