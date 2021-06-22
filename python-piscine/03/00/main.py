import discord

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

client.run("ODU2ODc5MTM4OTkyMjkxODUx.YNHc4g.X_0LAe7VQSDDz4DwEp87ayXy5PU")