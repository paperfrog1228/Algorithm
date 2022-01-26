import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n = readLine().toInt()
    while (true) {
        val a = readLine().toInt()
        if (a == 0) return
        if (a % n == 0)
            println("$a is a multiple of $n.")
        else
            println("$a is NOT a multiple of $n.")
    }
}
