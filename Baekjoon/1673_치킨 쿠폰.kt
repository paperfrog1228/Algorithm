import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    var br = BufferedReader(
        InputStreamReader(System.`in`)
    )
    while (true) {
        var st=br.readLine()?:break
        var (n, k) = st.split(' ').map { it.toInt() } ?: break
        var ans = 0
        var now = 0
        while (n > 0) {
            ans += n
            now += n
            n = 0
            n += now / k
            now %= k
        }
        println(ans)
    }
}