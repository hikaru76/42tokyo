import discord
import PIL.Image
import PIL.ImageDraw
import PIL.ImageFont

ttfontname = "/Users/sakamotohikaru/Library/Fonts/RictyDiminished-Regular.ttf"
fontsize = 36
canvasSize = (300, 150)
backgroundRGB = (0, 0, 0)
textRGB = (255, 255, 255)

client = discord.Client()

@client.event
async def on_ready():
    print('Logged in as')
    print(client.user.name)
    print(client.user.id)
    print('------')

@client.event
async def on_message(message):
    # 「おはよう」で始まるか調べる
    if message.content.startswith("Hello"):
        # 送り主がBotだった場合反応したくないので
        if client.user != message.author:
            # メッセージを書きます
            m = "Hello!"
            # メッセージが送られてきたチャンネルへメッセージを送ります
            await message.channel.send(m)

    if message.content.startswith("!draw"):
        if client.user != message.author:
            img =  PIL.Image.new('RGB', canvasSize, backgroundRGB)
            draw = PIL.ImageDraw.Draw(img)
            font = PIL.ImageFont.truetype(ttfontname, fontsize)
            textWidth, textHeight = draw.textsize(message.content[5:], font=font)
            textTopLeft = (canvasSize[0]//6, canvasSize[1]//2-textHeight//2)
            draw.text(textTopLeft, message.content[5:], fill=textRGB, font=font)
            img.save("img.png")
            file=discord.File("/Volumes/VAVA/42tokyo/python-piscine/03/01/img.png", filename="/Volumes/VAVA/42tokyo/python-piscine/03/01/img.png")
            await message.channel.send(file=file)

client.run("ODU2ODc5MTM4OTkyMjkxODUx.YNHc4g.X_0LAe7VQSDDz4DwEp87ayXy5PU")