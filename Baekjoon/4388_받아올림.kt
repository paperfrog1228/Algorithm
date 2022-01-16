import java.io.*
import java.lang.Integer.max

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    while (true) {
        val (a, b) = readLine().split(' ')
        var ans = 0
        var c = 0
        if (a == "0" && b == "0") break
        for (i in 0..max(a.length, b.length) - 1) {
            var aa = 0
            var bb = 0
            if (a.length - 1 >= i)
                aa = a[a.length - 1 - i] - '0'
            if (b.length - 1 >= i)
                bb = b[b.length - 1 - i] - '0'
            if (aa + bb + c >= 10) {
                ans++;
                c = 1;
            } else c = 0
        }
        println(ans)
    }
}
