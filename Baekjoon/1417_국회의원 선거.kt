import java.io.*
import java.util.PriorityQueue

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val pq=PriorityQueue<Int>(reverseOrder())
    val n=readLine().toInt()
    var me=readLine().toInt()
    var ans=0
    for(i in 1..n-1)
        pq.add(readLine().toInt())
    while(pq.size>0){
        val now=pq.poll()
        if(now>=me) {
            pq.add(now - 1)
            ans +=1
            me +=1
        }
    }
    print(ans)
}