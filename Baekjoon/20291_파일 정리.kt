import java.io.*

class ext(val name:String,val cnt:Int)
fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n= readLine().toInt()
    val mp= mutableMapOf<String,Int>()
    repeat(n){
        val s=readLine()
        val ss=s.split(".")[1]
        var a:Int
        if(mp.get(ss)==null)
            mp.put(ss,1)
        else {
            a= mp.get(ss)!!
            mp.put(ss, a + 1)
        }
    }
    val l= mutableListOf<ext>()
    for((k,v) in mp)
        l.add(ext(k,v))
    val ll=l.sortedWith(compareBy(ext::name))
    for(i in ll)
        println("${i.name} ${i.cnt} ")
}
