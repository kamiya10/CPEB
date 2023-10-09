# C - Aleksa and Stack

After the Serbian Informatics Olympiad, Aleksa was very sad, because he didn't win a medal (he didn't know stack), so Vasilije came to give him an easy problem, just to make his day better.

Vasilije gave Aleksa a positive integer $n$ ($n \le 3$) and asked him to construct a strictly increasing array of size $n$ of positive integers, such that

- $3 \cdot a_{i+2}$ is not divisible by $a_i + a_{i+1}$ for each i ($1 \le i \le n − 2$).

Note that a strictly increasing array $a$ of size $n$ is an array where $a_i < a_{i + 1}$ for each $i$ ($1 \le i \le n−1$).

Since Aleksa thinks he is a bad programmer now, he asked you to help him find such an array.

## Input

Each test consists of multiple test cases. The first line contains a single integer $t$ ($1 \le t \le 104$) — the number of test cases. The description of test cases follows.

The first line of each test case contains a single integer $n$ ($3 \le n \le 2 \cdot 105$) — the number of elements in array.

It is guaranteed that the sum of $n$ over all test cases does not exceed $2 \le 105$.

## Output

For each test case, output $n$ integers $a_1, a_2, a_3, …, a_n$ ($1 \le a_i \le 109$).

It can be proved that the solution exists for any $n$. If there are multiple solutions, output any of them.

## Sample 1

<table>
<tr>
<th> Input </th> <th> Output </th>
</tr>
<tr>
<td>

```
3
3
6
7
```

</td>
<td>

```
6 8 12
7 11 14 20 22 100
9 15 18 27 36 90 120
```

</td>
</tr>
</table>

## Note

In the first test case, $a_1 = 6$, $a_2 = 8$, $a_3 = 12$, so $a_1 + a_2 = 14$ and $3 \cdot a_3 = 36$, so $3 \cdot a_3$ is not divisible by $a_1 + a_2$.