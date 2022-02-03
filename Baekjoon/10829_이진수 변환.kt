import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    var n = readLine().toLong()
    var ans = ""
    while (n > 0) {
        if (n % 2 == 1L) ans += "1"
        else ans += "0"
        n /= 2
    }
    println(ans.reversed())
}
