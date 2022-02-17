


### Juoru
<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#languages">Languages</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
        <li><a href="#creating-nodes">Creating nodes</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

[![Product Name Screen Shot][product-screenshot]](https://example.com)

Here's a blank template to get started: To avoid retyping too much info. Do a search and replace with your text editor for the following: `github_username`, `repo_name`, `twitter_handle`, `linkedin_username`, `email`, `email_client`, `project_title`, `project_description`

<p align="right">(<a href="#top">back to top</a>)</p>



### Languages

* C++ for encryption and decryption
* Python for server management 


<p align="right">(<a href="#top">back to top</a>)</p>



<!-- GETTING STARTED -->
## Getting Started

A client serves both as a node and a user, so you'd only need to run one client.

### Prerequisites

Currently we only need some Python modules to run.
* Python
  ```sh
  pip install -r requirements.txt
  ```

### Installation

1. Clone the repo
   ```sh
	 git clone https://github.com/github_username/repo_name.git
   ```
3. Compile
   ```sh
	 make
   ```
4. Install
   ```sh
	 make install
   ```
### Creating nodes

> On a local environment you'd need to change the port that the node runs on, it's specified in the python file (NOT THE MODULE).

I'll make a simple handler than runs both the server/node and the C++ apps.
//TODO
<p align="right">(<a href="#top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## Usage
####  Relationships and address books: 
An addressbook is a database file that associates the JIP of nodes with their real IP address, this is to prevent others from seeing the real IP of nodes when viewing the relationships online. 
Every node has a constant connection to every other node that's related to him.
To make a connection to a new node, first you've got to establish a relationship and a relationship is established when the receiving node's IP address is stored in your addressbook. to get the address of people that you don't know, you'd send an address request to other nodes that may know the IP of your target node and they'd respond back with their IP address which would match with the hash in the JIP address when hashed.

//todo explain further

_For more examples, please refer to the [Documentation](https://example.com)_

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ROADMAP -->
## Roadmap

- [] Make a prototype
- [] Encryption
- [] Darkness
    - [] Choice of darkness

See the [open issues](https://github.com/github_username/repo_name/issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- LICENSE -->
## License

Distributed under the GNU general public License. See `LICENSE.md` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

Soon.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

* [Readme](https://github.com/othneildrew/Best-README-Template)
* []()
* []()

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/lapdlimited/rpcl.svg?style=for-the-badge
[contributors-url]: https://github.com/lapdlimited/rpcl/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/lapdlimited/rpcl.svg?style=for-the-badge
[forks-url]: https://github.com/lapdlimited/rpcl/network/members
[stars-shield]: https://img.shields.io/github/stars/lapdlimited/rpcl.svg?style=for-the-badge
[stars-url]: https://github.com/lapdlimited/rpcl/stargazers
[issues-shield]: https://img.shields.io/github/issues/lapdlimited/rpcl.svg?style=for-the-badge
[issues-url]: https://github.com/lapdlimited/rpcl/issues
[license-shield]: https://img.shields.io/github/license/lapdlimited/rpcl.svg?style=for-the-badge
[license-url]: https://github.com/lapdlimited/rpcl/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/linkedin_username
[product-screenshot]: images/screenshot.png
