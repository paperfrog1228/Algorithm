import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n = readLine().toInt()
    var ans = n
    repeat(n) {
        val s = readLine()
        for (i in 0 until s.length - 1) {
            if (s[i] == 'C' && s[i + 1] == 'D') {
                ans--
                break
            }
        }
    }
    print(ans)
}
