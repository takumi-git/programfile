from source import daily, weekly
print("Daily forecast:", daily.forecast())
print("Weekly forecast:")
for number, outlook in enumerate(weekly.forecast(), 1):#enumerate関数：インデックス番号と要素を取り出す
 print(number,outlook)#number：インデックスの番号を1から表示している
 