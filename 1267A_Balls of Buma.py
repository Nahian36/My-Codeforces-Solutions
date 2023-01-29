arr, cnt, chng_cnt, flag, chng_idx = input(), 1, [0], 0, []
lett = arr[0]
for i in range(len(arr)):
    if arr[i] == lett:
        chng_cnt[-1] += 1
    else:
        lett = arr[i]
        cnt += 1
        chng_cnt.append(1)
        chng_idx.append(i - 1)
chng_idx.append(i)
if cnt % 2 == 0:
    print(0)
else:
    chng_cnt[int(cnt / 2)] += 1
    for i in range(int(cnt / 2)):
        if arr[chng_idx[i]] == arr[chng_idx[-1 - i]]:
            chng_cnt[i] += chng_cnt[-1 - i]
        else:
            flag = 1
            break
    for i in range(int(cnt / 2) + 1):
        if chng_cnt[i] < 3:
            flag = 1
            break
    print(chng_cnt[int(cnt / 2)]) if flag != 1 else print(0)
