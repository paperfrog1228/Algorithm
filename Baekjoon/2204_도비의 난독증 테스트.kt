import java.io.*
class S(val trans: String, val origin: String)
fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    while (true) {
        var n = readLine().toInt()
        if (n == 0)
            return;
        var a = arrayListOf<S>()
        for (i in 1..n) {
            var o = readLine()
            var t: String = ""
            for (j in 0..o.length - 1)
                if (o[j] < 'a')
                    t += o[j] + ('a' - 'A')
                else t += o[j]
            a.add(S(t, o))
        }
        a.sortWith(compareBy(S::trans))
        println(a[0].origin)
    }
}