# 一个转换THwiki上歌词为同步歌词格式的脚本
raw = []
with open("input.dat", encoding='UTF-8') as source:
    for line in source:
        raw.append(str(line.rstrip()))
mapA = {}
for iterA in range(0, len(raw)):
    this = raw[iterA]
    if iterA == len(raw) - 1 and this[0].isdigit():
        mapA[this] = ""
        break
    elif iterA == len(raw) - 1 and not this[0].isdigit():
        break
    that = raw[iterA+1]
    if not this[0].isdigit():
        continue
    elif not that[0].isdigit():
        mapA[this] = that
        iterA = iterA + 1
    else:
        mapA[this] = ""
with open('output.dat', 'w', encoding='UTF-8') as destination:
    for times in mapA.keys():
        destination.write("["+times+"] " + mapA[times]+"\n")
