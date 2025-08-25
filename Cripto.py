import plotly.graph_objects as go

# Dados das criptomoedas
criptomoedas = ['Bitcoin', 'Ethereum', 'Litecoin', 'Ripple']
valores = [40000, 2500, 180, 0.8]

# Criação do gráfico de barras
fig = go.Figure(data=[go.Bar(x=criptomoedas, y=valores)])

# Configurações do layout
fig.update_layout(
    title='Valor das Criptomoedas',
    xaxis_title='Criptomoedas',
    yaxis_title='Valor (USD)',
    plot_bgcolor='white',  # Cor do fundo do gráfico
    paper_bgcolor='lightgray',  # Cor do fundo do papel
    font=dict(color='black')  # Cor da fonte
)

# Exibição do dashboard
fig.show()
