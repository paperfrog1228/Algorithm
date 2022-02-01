import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n = readLine().toInt()
    repeat(n) {
        if ((readLine().last() - '0') % 2 == 0) println("even")
        else println("odd")
    }
}
