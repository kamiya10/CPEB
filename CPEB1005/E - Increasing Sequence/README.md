# E - Increasing Sequence

You are given a sequence $a_1, a_2,	\cdots, a_n$. A sequence $b_1,b_2, \cdots,b_n$ is called *good*, if it satisfies all of the following conditions:

- $b_i$ is a positive integer for $i = 1, 2, \cdots, n$;
- $b_i \ne a_i$ for $i = 1, 2, \cdots, n$;
- $b_1 \lt b_2 \lt \cdots \lt b_n$.

Find the minimum value of $b_n$ among all good sequences $b_1, b_2,	\cdots, b_n$.

## Input

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 100$). The description of the test cases follows.

The first line of each test case contains a single integer $n$ ($1 \le n \le 100$).

The second line of each test case contains $n$ integers $a_1, a_2, \cdots, a_n$ ($1 \le a_i \le 109$).

## Output

For each test case, print a single integer — the minimum value of $b_n$ among all good sequences $b$.


## Sample 1

<table>
<tr>
<th> Input </th> <th> Output </th>
</tr>
<tr>
<td>

```
3
5
1 3 2 6 7
4
2 3 4 5
1
1
```

</td>
<td>

```
8
4
2
```

</td>
</tr>
</table>

## Note

In the first test case, $b = [2, 4, 5, 7, 8]$ is a good sequence. It can be proved that there is no good $b$ with $b_5 \lt 8$.

In the second test case, $b = [1, 2, 3, 4]$ is an optimal good sequence.

In the third test case, $b = [2]$ is an optimal good sequence.