import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    println(if (readLine().substring(0, 3) == "555") "YES" else "NO")
}
