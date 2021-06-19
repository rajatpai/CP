import queue
N, M = map(int, input().split())
nodes = [[] for i in range(N)]
que = queue.Queue()
sign = [-1 for i in range(N)]

for i in range(M):
    a, b = map(int, input().split())
    nodes[a-1].append(b-1)
    nodes[b-1].append(a-1)

sign[0] = 0
que.put(0)

while not que.empty():
    cur = que.get()
    for i in nodes[cur]:
        if sign[i] != -1: continue
        que.put(i)
        sign[i] = cur

if all([i != -1 for i in sign]):
    print("Yes")
    for i in sign[1:]:
        print(i+1)
else:
    print("No")