import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    var cnt = 0
    val n = readLine().toInt();
    var now = 665
    while (cnt < n) {
        now++
        if (now.toString().contains("666"))
            cnt++
    }
    println(now)
}
