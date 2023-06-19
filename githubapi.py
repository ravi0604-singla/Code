import requests

# GitHub User URL
user_url = 'https://github.com/amanullahmd12'

# Extract the username from the URL
username = user_url.split('/')[-1]

# API endpoint
api_url = f'https://api.github.com/users/{username}/repos'

# Make the API request
response = requests.get(api_url)

# Check if the request was successful
if response.status_code == 200:
    repositories = response.json()  # Parse the JSON response
    if repositories:
        # Find the repository with the most technically complex code
        most_complex_repo = max(repositories, key=lambda repo: repo['size'])

        # Extract relevant information
        repo_name = most_complex_repo['name']
        repo_url = most_complex_repo['html_url']
        repo_description = most_complex_repo['description']
        
        print(f"The most conmplex Repository: {repo_name}")
        print(f"URL: {repo_url}")
        print(f"Description: {repo_description}")
    else:
        print("No repositories found.")
else:
    print(f"Failed to fetch repositories. Status code: {response.status_code}")

