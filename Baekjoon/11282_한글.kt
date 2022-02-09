import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n=readLine().toInt()+44031
    print(Char(n))
}
