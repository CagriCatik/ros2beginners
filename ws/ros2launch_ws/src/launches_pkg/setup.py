from setuptools import setup

package_name = 'launches_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ed',
    maintainer_email='ed@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "py_node = interfaces_pkg.my_first_node:main",
            "robot_news_station = interfaces_pkg.robot_news_station:main",
            "smartphone = interfaces_pkg.smartphone:main",
            "number_publisher = interfaces_pkg.number_publisher:main",
            "number_counter = interfaces_pkg.number_counter:main",
            "add_two_ints_server = interfaces_pkg.add_two_ints_server:main",
            "add_two_ints_client = interfaces_pkg.add_two_ints_client:main",
            "add_two_ints_client_no_oop = interfaces_pkg.add_two_ints_client_no_oop:main",
            "hw_status_publisher = interfaces_pkg.hw_status_publisher:main",
            "led_panel = interfaces_pkg.led_panel:main",
            "battery = interfaces_pkg.battery:main"
        ],
    },
)
